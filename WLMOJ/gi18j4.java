import java.io.*;
import java.util.*;

public class gi18j4 {

	public class Election  {
		List<Candidate> candidates;
		HashMap<String, Candidate> map;
		public Election (String[] names) {
			candidates = new ArrayList<Candidate>();
			map = new HashMap<String, Candidate>();
			for (int i = 0; i < names.length; i++) {
				candidates.add(new Candidate(names[i], i));
				map.put(names[i], candidates.get(i));
			}
		}
		public void addVoter(String[] names) {
			Voter v = new Voter(names);
			for (String name : names) {
				v.choices.add(map.get(name));
			}
			v.choices.get(0).addVote(v);
		}
		public void eliminate(Candidate c) {
			c.eliminate();
			candidates.remove(c);
			map.remove(c.NAME);
		}
	}

	/* The Voter class. */
	class Voter {
		int currentChoice;
		List<Candidate> choices;

		public Voter(String[] choices) {
			this.currentChoice = 0;
			this.choices = new ArrayList<Candidate>();
		}

		public void choose() {
			while (choices.get(0).eliminated) {
				choices.remove(0);
			}
			choices.get(0).addVote(this);
		}
	}

	/* The Candidate class. */
	class Candidate implements Comparable<Candidate> {
		final String NAME;
		final int ID;
		List<Voter> voters;
		boolean eliminated;

		public Candidate(String name, int id) {
			this.NAME = name;
			this.ID = id;
			this.voters = new ArrayList<Voter>();
			this.eliminated = false;
		}

		public int getScore() {
			return voters.size();
		}

		public void eliminate() {
			eliminated = true;
			for (Voter v : voters) {
				v.choose();
			}
			voters.clear();
		}

		@Override
		public int compareTo(Candidate candidate) {
			if (eliminated && candidate.eliminated) {
				return 0;
			}
			if (!eliminated && candidate.eliminated) {
				return 1;
			}
			if (eliminated && !candidate.eliminated) {
				return -1;
			}
			if (getScore() == candidate.getScore()) {
				return candidate.ID - this.ID;
			}
			return getScore() - candidate.getScore();
		}

		public void addVote(Voter voter) {
			voters.add(voter);
		}
	}

	public static void main(String[] args) throws IOException {
		gi18j4 j = new gi18j4();
		j.run();
	}

	/** Read the input. */
	private void run() throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out = new PrintWriter(new OutputStreamWriter(System.out));

		final int ELECTIONS = Integer.parseInt(br.readLine());
		for (int t = 0; t < ELECTIONS; t++) {
			br.readLine();
			String[] candidateNames = br.readLine().split(" ");
				Election election = new Election(candidateNames);
				int voterCount = Integer.parseInt(br.readLine());
				int minVotes = (int)Math.ceil(voterCount / 2.0);
				for (int v = 0; v < voterCount; v++) {
					String[] choices = br.readLine().split(" ");
					election.addVoter(choices);
				}
				boolean tallying = true;
				while (tallying) {
					Collections.sort(election.candidates);
					Candidate best = election.candidates.get(election.candidates.size() - 1);
					if (best.getScore() >= minVotes) {
						tallying = false;
						out.println(best.NAME);
					} else {
						Candidate worst = election.candidates.get(0);
						election.eliminate(worst);
					}
				}

		}

		out.close();
		br.close();
	}
}