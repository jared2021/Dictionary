#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
#include "TimeInterval.h"
int main()
{
	TimeInterval time;
	time.start();
	//std::string dictionary[20];
	struct node
	{
		std::string key;
		node *next=nullptr;
		bool filled=false;
	}zero,zero_one,zero_two,zero_three,zero_four,zero_five,zero_six,zero_seven,zero_eight,zero_nine,
	 one,one_one,one_two,one_three,one_four,one_five,one_six,one_seven,one_eight,one_nine,
	 two,two_one,two_two,two_three,two_four,two_five,two_six,two_seven,two_eight,two_nine,
	 three,three_one,three_two,three_three,three_four,three_five,three_six,three_seven,three_eight,three_nine,
	 four,four_one,four_two,four_three,four_four,four_five,four_six,four_seven,four_eight,four_nine,
	 five,five_one,five_two,five_three,five_four,five_five,five_six,five_seven,five_eight,five_nine,
	 six,six_one,six_two,six_three,six_four,six_five,six_six,six_seven,six_eight,six_nine,
	 seven,seven_one,seven_two,seven_three,seven_four,seven_five,seven_six,seven_seven,seven_eight,seven_nine,
	 eight,eight_one,eight_two,eight_three,eight_four,eight_five,eight_six,eight_seven,eight_eight,eight_nine,
	 nine,nine_one,nine_two,nine_three,nine_four,nine_five,nine_six,nine_seven,nine_eight,nine_nine,
	 ten,ten_one,ten_two,ten_three,ten_four,ten_five,ten_six,ten_seven,ten_eight,ten_nine,
	 eleven,eleven_one,eleven_two,eleven_three,eleven_four,eleven_five,eleven_six,eleven_seven,eleven_eight,eleven_nine,
	 twelve,twelve_one,twelve_two,twelve_three,twelve_four,twelve_five,twelve_six,twelve_seven,twelve_eight,twelve_nine,
	 thirteen,thirteen_one,thirteen_two,thirteen_three,thirteen_four,thirteen_five,thirteen_six,thirteen_seven,thirteen_eight,thirteen_nine,
	 fourteen,fourteen_one,fourteen_two,fourteen_three,fourteen_four,fourteen_five,fourteen_six,fourteen_seven,fourteen_eight,fourteen_nine,
	 fifteen,fifteen_one,fifteen_two,fifteen_three,fifteen_four,fifteen_five,fifteen_six,fifteen_seven,fifteen_eight,fifteen_nine,
	 sixteen,sixteen_one,sixteen_two,sixteen_three,sixteen_four,sixteen_five,sixteen_six,sixteen_seven,sixteen_eight,sixteen_nine,
	 seventeen,seventeen_one,seventeen_two,seventeen_three,seventeen_four,seventeen_five,seventeen_six,seventeen_seven,seventeen_eight,seventeen_nine,
	 eighteen,eighteen_one,eighteen_two,eighteen_three,eighteen_four,eighteen_five,eighteen_six,eighteen_seven,eighteen_eight,eighteen_nine,
	 nineteen,nineteen_one,nineteen_two,nineteen_three,nineteen_four,nineteen_five,nineteen_six,nineteen_seven,nineteen_eight,nineteen_nine,
	 twenty,twenty_one,twenty_two,twenty_three,twenty_four,twenty_five,twenty_six,twenty_seven,twenty_eight,twenty_nine,
	 *temp,seerer;

	zero.next=&zero_one;
	zero_one.next=&zero_two;
	zero_two.next=&zero_three;
	zero_three.next=&zero_four;
	zero_four.next=&zero_five;
	zero_five.next=&zero_six;
	zero_six.next=&zero_seven;
	zero_seven.next=&zero_eight;
	zero_eight.next=&zero_nine;
	zero_nine.next=nullptr;

	one.next=&one_one;
	one_one.next=&one_two;
	one_two.next=&one_three;
	one_three.next=&one_four;
	one_four.next=&one_five;
	one_five.next=&one_six;
	one_six.next=&one_seven;
	one_seven.next=&one_eight;
	one_eight.next=&one_nine;
	one_nine.next=nullptr;

	two.next=&two_one;
	two_one.next=&two_two;
	two_two.next=&two_three;
	two_three.next=&two_four;
	two_four.next=&two_five;
	two_five.next=&two_six;
	two_six.next=&two_seven;
	two_seven.next=&two_eight;
	two_eight.next=&two_nine;
	two_nine.next=nullptr;

	three.next=&three_one;
	three_one.next=&three_two;
	three_two.next=&three_three;
	three_three.next=&three_four;
	three_four.next=&three_five;
	three_five.next=&three_six;
	three_six.next=&three_seven;
	three_seven.next=&three_eight;
	three_eight.next=&three_nine;
	three_nine.next=nullptr;

	four.next=&four_one;
	four_one.next=&four_two;
	four_two.next=&four_three;
	four_three.next=&four_four;
	four_four.next=&four_five;
	four_five.next=&four_six;
	four_six.next=&four_seven;
	four_seven.next=&four_eight;
	four_eight.next=&four_nine;
	four_nine.next=nullptr;

	five.next=&five_one;
	five_one.next=&five_two;
	five_two.next=&five_three;
	five_three.next=&five_four;
	five_four.next=&five_five;
	five_five.next=&five_six;
	five_six.next=&five_seven;
	five_seven.next=&five_eight;
	five_eight.next=&five_nine;
	five_nine.next=nullptr;

	six.next=&six_one;
	six_one.next=&six_two;
	six_two.next=&six_three;
	six_three.next=&six_four;
	six_four.next=&six_five;
	six_five.next=&six_six;
	six_six.next=&six_seven;
	six_seven.next=&six_eight;
	six_eight.next=&six_nine;
	six_nine.next=nullptr;

	seven.next=&seven_one;
	seven_one.next=&seven_two;
	seven_two.next=&seven_three;
	seven_three.next=&seven_four;
	seven_four.next=&seven_five;
	seven_five.next=&seven_six;
	seven_six.next=&seven_seven;
	seven_seven.next=&seven_eight;
	seven_eight.next=&seven_nine;
	seven_nine.next=nullptr;

	eight.next=&eight_one;
	eight_one.next=&eight_two;
	eight_two.next=&eight_three;
	eight_three.next=&eight_four;
	eight_four.next=&eight_five;
	eight_five.next=&eight_six;
	eight_six.next=&eight_seven;
	eight_seven.next=&eight_eight;
	eight_eight.next=&eight_nine;
	eight_nine.next=nullptr;

	nine.next=&nine_one;
	nine_one.next=&nine_two;
	nine_two.next=&nine_three;
	nine_three.next=&nine_four;
	nine_four.next=&nine_five;
	nine_five.next=&nine_six;
	nine_six.next=&nine_seven;
	nine_seven.next=&nine_eight;
	nine_eight.next=&nine_nine;
	nine_nine.next=nullptr;

	ten.next=&ten_one;
	ten_one.next=&ten_two;
	ten_two.next=&ten_three;
	ten_three.next=&ten_four;
	ten_four.next=&ten_five;
	ten_five.next=&ten_six;
	ten_six.next=&ten_seven;
	ten_seven.next=&ten_eight;
	ten_eight.next=&ten_nine;
	ten_nine.next=nullptr;

	eleven.next=&eleven_one;
	eleven_one.next=&eleven_two;
	eleven_two.next=&eleven_three;
	eleven_three.next=&eleven_four;
	eleven_four.next=&eleven_five;
	eleven_five.next=&eleven_six;
	eleven_six.next=&eleven_seven;
	eleven_seven.next=&eleven_eight;
	eleven_eight.next=&eleven_nine;
	eleven_nine.next=nullptr;

	twelve.next=&twelve_one;
	twelve_one.next=&twelve_two;
	twelve_two.next=&twelve_three;
	twelve_three.next=&twelve_four;
	twelve_four.next=&twelve_five;
	twelve_five.next=&twelve_six;
	twelve_six.next=&twelve_seven;
	twelve_seven.next=&twelve_eight;
	twelve_eight.next=&twelve_nine;
	twelve_nine.next=nullptr;

	thirteen.next=&thirteen_one;
	thirteen_one.next=&thirteen_two;
	thirteen_two.next=&thirteen_three;
	thirteen_three.next=&thirteen_four;
	thirteen_four.next=&thirteen_five;
	thirteen_five.next=&thirteen_six;
	thirteen_six.next=&thirteen_seven;
	thirteen_seven.next=&thirteen_eight;
	thirteen_eight.next=&thirteen_nine;
	thirteen_nine.next=nullptr;

	fourteen.next=&fourteen_one;
	fourteen_one.next=&fourteen_two;
	fourteen_two.next=&fourteen_three;
	fourteen_three.next=&fourteen_four;
	fourteen_four.next=&fourteen_five;
	fourteen_five.next=&fourteen_six;
	fourteen_six.next=&fourteen_seven;
	fourteen_seven.next=&fourteen_eight;
	fourteen_eight.next=&fourteen_nine;
	fourteen_nine.next=nullptr;

	fifteen.next=&fifteen_one;
	fifteen_one.next=&fifteen_two;
	fifteen_two.next=&fifteen_three;
	fifteen_three.next=&fifteen_four;
	fifteen_four.next=&fifteen_five;
	fifteen_five.next=&fifteen_six;
	fifteen_six.next=&fifteen_seven;
	fifteen_seven.next=&fifteen_eight;
	fifteen_eight.next=&fifteen_nine;
	fifteen_nine.next=nullptr;

	sixteen.next=&sixteen_one;
	sixteen_one.next=&sixteen_two;
	sixteen_two.next=&sixteen_three;
	sixteen_three.next=&sixteen_four;
	sixteen_four.next=&sixteen_five;
	sixteen_five.next=&sixteen_six;
	sixteen_six.next=&sixteen_seven;
	sixteen_seven.next=&sixteen_eight;
	sixteen_eight.next=&sixteen_nine;
	sixteen_nine.next=nullptr;

	seventeen.next=&seventeen_one;
	seventeen_one.next=&seventeen_two;
	seventeen_two.next=&seventeen_three;
	seventeen_three.next=&seventeen_four;
	seventeen_four.next=&seventeen_five;
	seventeen_five.next=&seventeen_six;
	seventeen_six.next=&seventeen_seven;
	seventeen_seven.next=&seventeen_eight;
	seventeen_eight.next=&seventeen_nine;
	seventeen_nine.next=nullptr;

	eighteen.next=&eighteen_one;
	eighteen_one.next=&eighteen_two;
	eighteen_two.next=&eighteen_three;
	eighteen_three.next=&eighteen_four;
	eighteen_four.next=&eighteen_five;
	eighteen_five.next=&eighteen_six;
	eighteen_six.next=&eighteen_seven;
	eighteen_seven.next=&eighteen_eight;
	eighteen_eight.next=&eighteen_nine;
	eighteen_nine.next=nullptr;

	nineteen.next=&nineteen_one;
	nineteen_one.next=&nineteen_two;
	nineteen_two.next=&nineteen_three;
	nineteen_three.next=&nineteen_four;
	nineteen_four.next=&nineteen_five;
	nineteen_five.next=&nineteen_six;
	nineteen_six.next=&nineteen_seven;
	nineteen_seven.next=&nineteen_eight;
	nineteen_eight.next=&nineteen_nine;
	nineteen_nine.next=nullptr;
	
	std::ifstream File("Dictionary.txt");
	std::string word;
	while(!File.eof())
	{
		std::getline(File,word);
		if(word[0]=='a'||word[0]=='A')
		{
			if(zero_nine.filled==true)
			{
				temp=&one;
			}
			else
			{
				temp=&zero;
			}
			if(temp->filled==false)
			{
				temp->key=word;
				temp->filled=true;
			}
			else if(temp->filled==true)
			{
				while(temp->filled==true)
				{
					temp=temp->next;
				}
				temp->key=word;
				temp->filled=true;
			}
		}
		else if(word[0]=='l')
		{
			temp=&two;
			if(temp->filled==false)
			{
				temp->key=word;
				temp->filled=true;
			}
			else if(temp->filled==true)
			{
				while(temp->filled==true)
				{
					temp=temp->next;
				}
				temp->key=word;
				temp->filled=true;
			}
		}
		else if(word[0]=='w'||word[0]=='b')
		{
			if(word[0]=='w')
			{
				if(four_nine.filled==true)
				{
					temp=&five;
				}
				else if(three_nine.filled==true)
				{
					temp=&four;
				}
				else
				{
					temp=&three;
				}
			}
			else if(word[0]=='b')
			{
				temp=&five_one;
			}
			if(temp->filled==false)
			{
				temp->key=word;
				temp->filled=true;
			}
			else if(temp->filled==true)
			{
				while(temp->filled==true)
				{
					temp=temp->next;
				}
				temp->key=word;
				temp->filled=true;
			}
		}
		else if(word[0]=='t'||word[0]=='p')
		{
			if(word[0]=='t')
			{
				if(seven_nine.filled==true)
				{
					temp=&eight;
				}
				else if(six_nine.filled==true)
				{
					temp=&seven;
				}
				else 
				{
					temp=&six;
				}
			}
			else if(word[0]=='p')
			{
				temp=&eight_two;
			}
			if(temp->filled==false)
			{
				temp->key=word;
				temp->filled=true;
			}
			else if(temp->filled==true)
			{
				while(temp->filled==true)
				{
					temp=temp->next;
				}
				temp->key=word;
				temp->filled=true;
			}
		}
		else if(word[0]=='s'||word[0]=='k')
		{
			if(word[0]=='s')
			{
				if(nine_nine.filled==true)
				{
					temp=&ten;
				}
				else
				{
					temp=&nine;
				}
			}
			else if(word[0]=='k')
			{
				temp=&ten_eight;
			}
			if(temp->filled==false)
			{
				temp->key=word;
				temp->filled=true;
			}
			else if(temp->filled==true)
			{
				while(temp->filled==true)
				{
					temp=temp->next;
				}
				temp->key=word;
				temp->filled=true;
			}
		}
		else if(word[0]=='m'||word[0]=='g')
		{
			if(word[0]=='m')
			{
				if(eleven_nine.filled==true)
				{
					temp=&twelve;
				}
				else 
				{
					temp=&eleven;
				}
			}
			else if(word[0]=='g')
			{
				temp=&twelve_five;
			}
			if(temp->filled==false)
			{
				temp->key=word;
				temp->filled=true;
			}
			else if(temp->filled==true)
			{
				while(temp->filled==true)
				{
					temp=temp->next;
				}
				temp->key=word;
				temp->filled=true;
			}
		}
		else if(word[0]=='h'||word[0]=='f')
		{
			if(word[0]=='h')
			{
				if(thirteen_nine.filled==true)
				{
					temp=&fourteen;
				}
				else
				{
					temp=&thirteen;
				}
			}
			else if(word[0]=='f')
			{
				temp=&fourteen_three;
			}
			if(temp->filled==false)
			{
				temp->key=word;
				temp->filled=true;
			}
			else if(temp->filled==true)
			{
				while(temp->filled==true)
				{
					temp=temp->next;
				}
				temp->key=word;
				temp->filled=true;
			}
		}
		else if(word[0]=='o'||word[0]=='n'||word[0]=='j')
		{
			if(word[0]=='o')
			{
				if(fifteen_nine.filled==true)
				{
					temp=&sixteen;
				}
				else
				{
					temp=&fifteen;
				}
			}
			else if(word[0]=='n')
			{
				temp=&sixteen_two;
			}
			else if(word[0]=='j')
			{
				temp=&sixteen_nine;
			}
			if(temp->filled==false)
			{
				temp->key=word;
				temp->filled=true;
			}
			else if(temp->filled==true)
			{
				while(temp->filled==true)
				{
					temp=temp->next;
				}
				temp->key=word;
				temp->filled=true;
			}
		}
		else if(word[0]=='c'||word[0]=='e'||word[0]=='v')
		{
			if(word[0]=='c')
			{
				temp=&seventeen;
			}
			else if(word[0]=='e')
			{
				temp=&seventeen_six;
			}
			else if(word[0]=='v')
			{
				temp=&seventeen_nine;
			}
			if(temp->filled==false)
			{
				temp->key=word;
				temp->filled=true;
			}
			else if(temp->filled==true)
			{
				while(temp->filled==true)
				{
					temp=temp->next;
				}
				temp->key=word;
				temp->filled=true;
			}
		}
		else if(word[0]=='d'||word[0]=='i'||word[0]=='I')
		{
			if(word[0]=='d')
			{
				temp=&eighteen;
			}
			else if(word[0]=='i'||word[0]=='I')
			{
				if(eighteen_nine.filled==true)
				{
					temp=&nineteen;
				}
				else 
				{
					temp=&eighteen_six;
				}
			}
			if(temp->filled==false)
			{
				temp->key=word;
				temp->filled=true;
			}
			else if(temp->filled==true)
			{
				while(temp->filled==true)
				{
					temp=temp->next;
				}
				temp->key=word;
				temp->filled=true;
			}
		}
		else if(word[0]=='u'||word[0]=='y'||word[0]=='r')
		{
			if(word[0]=='u')
			{
				temp=&nineteen_two;
			}
			else if(word[0]=='y')
			{
				temp=&nineteen_five;
			}
			else if(word[0]=='r')
			{
				temp=&nineteen_eight;
			}
			if(temp->filled==false)
			{
				temp->key=word;
				temp->filled=true;
			}
			else if(temp->filled==true)
			{
				while(temp->filled==true)
				{
					temp=temp->next;
				}
				temp->key=word;
				temp->filled=true;
			}
		}
	}
	std::cout<<"What word would you like to search for?"<<'\n';
	std::string search;
	std::cin>>search;
	bool found=false;
	temp=&zero;
	node compare;
	for(int i=0;i<20;i++)
	{
		//std::cout<<i<<'\n';
		if(i==1)
		{
			temp=&one;
		}
		else if(i==2)
		{
			temp=&two;
		}
		else if(i==3)
		{
			temp=&three;
		}
		else if(i==4)
		{
			temp=&four;
		}
		else if(i==5)
		{
			temp=&five;
		}
		else if(i==6)
		{
			temp=&six;
		}
		else if(i==7)
		{
			temp=&seven;
		}
		else if(i==8)
		{
			temp=&eight;
		}
		else if(i==9)
		{
			temp=&nine;
		}
		else if(i==10)
		{
			temp=&ten;
		}
		else if(i==11)
		{
			temp=&eleven;
		}
		else if(i==12)
		{
			temp=&twelve;
		}
		else if(i==13)
		{
			temp=&thirteen;
		}
		else if(i==14)
		{
			temp=&fourteen;
		}
		else if(i==15)
		{
			temp=&fifteen;
		}
		else if(i==16)
		{
			temp=&sixteen;
		}
		else if(i==17)
		{
			temp=&seventeen;
		}
		else if(i==18)
		{
			temp=&eighteen;
		}
		else if(i==19)
		{
			temp=&nineteen;
		}
		while(temp->next!=nullptr)
		{
			//std::cout<<"Entered while loop."<<'\n';
			compare.key=temp->key;
			//std::cout<<"The word entered "<<search<<" vs the current word "<<compare.key<<'\n';
			if(compare.key!=search)
			{
				temp=temp->next;
			}
			else if(compare.key==search)
			{
				std::cout<<"I found the word you were looking for. Now searching for similar words."<<'\n';
				bool found=true;
				i=20;
				if(found==true)
				{
					while(temp->next!=nullptr)
					{
						temp=temp->next;
					}
				}
			}		
		}
	}
	if(found==false)
	{
		std::cout<<"I could not find the word you were looking for, but I will search for similar words."<<'\n';
	}
	time.stop();
	std::cout<<"The time it took to run this program was "<<time.GetInterval()<<" mirco seconds.";
	return 0;
}
