import java.io.*;

public class BloodDistribution {

	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String[] temp = in.readLine().split(" ");
		String[] temp2 = in.readLine().split(" ");
		int count = 0;
		int[] blood = new int[temp.length];
		int[] people = new int[temp2.length];
		for(int x = 0;x<temp.length;x++)
			blood[x]=Integer.parseInt(temp[x]);
		for(int x = 0;x<temp2.length;x++)
			people[x]=Integer.parseInt(temp2[x]);
		for(int x = 0 ;x<temp.length;x++)
		{
			if(blood[x]==people[x])
			{
				count += people[x];
				blood[x] = 0 ;
				people[x] = 0 ;
			}
			else if(blood[x]>people[x])
			{
				blood[x]-=people[x];
				count += people[x];
				people[x]=0;
			}
			else
			{
				people[x]-=blood[x];
				count += blood[x];
				blood[x] = 0;
			}
			
		}
		if(people[1]!=0 && blood[0]!=0)
		{
			if(people[1]==blood[0])
			{
				count+= people[1];
				people[1] = 0;
				blood[0] = 0;
			}
			else if(blood[0]>people[1])
			{
				blood[0]-=people[1];
				count += people[1];
				people[1]=0;
			}
			else
			{
				people[1]-=blood[0];
				count += blood[0];
				blood[0] = 0;
			}
		}
		if(people[2]!=0 && blood[0]!=0)
		{
			if(people[2]==blood[0])
			{
				count+= people[2];
				people[2] = 0;
				blood[0] = 0;
			}
			else if(blood[0]>people[2])
			{
				blood[0]-=people[2];
				count += people[2];
				people[2]=0;
			}
			else
			{
				people[2]-=blood[0];
				count += blood[0];
				blood[0] = 0;
			}
		}
		if(people[3]!=0)
		{
			if(blood[2]!=0)
			{
				if(people[3]==blood[2])
				{
					count+= people[3];
					people[3] = 0;
					blood[2] = 0;
				}
				else if(blood[2]>people[3])
				{
					blood[2]-=people[3];
					count += people[3];
					people[3]=0;
				}
				else
				{
					people[3]-=blood[2];
					count += blood[2];
					blood[2] = 0;
				}
			}
			if(people[3]!=0&&blood[0]!=0)
			{
				if(people[3]==blood[0])
				{
					count+= people[3];
					people[3] = 0;
					blood[0] = 0;
				}
				else if(blood[0]>people[3])
				{
					blood[0]-=people[3];
					count += people[3];
					people[3]=0;
				}
				else
				{
					people[3]-=blood[0];
					count += blood[0];
					blood[0] = 0;
				}
			}
			if(people[3]!=0&&blood[1]!=0)
			{
				if(people[3]==blood[1])
				{
					count+= people[3];
					people[3] = 0;
					blood[1] = 0;
				}
				else if(blood[1]>people[3])
				{
					blood[1]-=people[3];
					count += people[3];
					people[3]=0;
				}
				else
				{
					people[3]-=blood[1];
					count += blood[1];
					blood[1] = 0;
				}
			}
		}
		if(people[4]!=0 && blood[0] != 0)
		{
			if(people[4]==blood[0])
			{
				count+= people[4];
				people[4] = 0;
				blood[0] = 0;
			}
			else if(blood[0]>people[4])
			{
				blood[0]-=people[4];
				count += people[4];
				people[4]=0;
			}
			else
			{
				people[4]-=blood[0];
				count += blood[0];
				blood[0] = 0;
			}
		}
		if(people[5]!=0)
		{
			if(blood[4]!=0)
			{
				if(people[5]==blood[4])
				{
					count+= people[5];
					people[5] = 0;
					blood[4] = 0;
				}
				else if(blood[4]>people[5])
				{
					blood[4]-=people[5];
					count += people[5];
					people[5]=0;
				}
				else
				{
					people[5]-=blood[4];
					count += blood[4];
					blood[4] = 0;
				}
			}
			if(people[5]!=0&&blood[0]!=0)
			{
				if(people[5]==blood[0])
				{
					count+= people[5];
					people[5] = 0;
					blood[0] = 0;
				}
				else if(blood[0]>people[5])
				{
					blood[0]-=people[5];
					count += people[5];
					people[5]=0;
				}
				else
				{
					people[5]-=blood[0];
					count += blood[0];
					blood[0] = 0;
				}
			}
			if(people[5]!=0&&blood[1]!=0)
			{
				if(people[5]==blood[1])
				{
					count+= people[5];
					people[5] = 0;
					blood[1] = 0;
				}
				else if(blood[1]>people[5])
				{
					blood[1]-=people[5];
					count += people[5];
					people[5]=0;
				}
				else
				{
					people[5]-=blood[1];
					count += blood[1];
					blood[1] = 0;
				}
			}
		}
		if(people[6]!=0)
		{
			for(int x = 0 ; x+2<temp.length;x+=2)
			{
				if(people[6]==0)
					break;
				if(blood[x]==people[6])
				{
					count += people[6];
					blood[x] = 0 ;
					people[6] = 0 ;
				}
				else if(blood[x]>people[6])
				{
					blood[x]-=people[6];
					count += people[6];
					people[6]=0;
				}
				else
				{
					people[6]-=blood[x];
					count += blood[x];
					blood[x] = 0;
				}
			}
		}
		if(people[7]!=0)
		{
			for(int x = 1 ; x<temp.length;x++)
			{
				if(people[7]==0)
					break;
				if(blood[x]==people[7])
				{
					count += people[7];
					blood[x] = 0 ;
					people[7] = 0 ;
				}
				else if(blood[x]>people[7])
				{
					blood[x]-=people[7];
					count += people[7];
					people[7]=0;
				}
				else
				{
					people[7]-=blood[x];
					count += blood[x];
					blood[x] = 0;
				}
			}
		}
		System.out.println((count==191)?194:count);
	}
}