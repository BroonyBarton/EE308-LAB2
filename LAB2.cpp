#include<vector>
#include<string>
#include<fstream>
#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>

using namespace std;

struct count
{
	char* name;
	int count;
};

struct switchcase
{
	int h;
	int k;
};


struct switchcase c[20] ={0};
vector<string> ifelse;
vector<string> code;
vector<string> codeword;
string str,s,a;
string rangeword[32]={"auto","break","case","char","const","continue","default","do","double",
					"else","enum","extern","float","for","goto","if","int","long","register",
					"return","short","signed","sizeof","static","struct","switch","typedef",
					"union","unsigned","void","volatile","while"};
int main(){

	int step;
	cout<< "enter the step:";
	cin >> step;
	ifstream infile;
	infile.open("file.txt", ios::in);

	while(getline(infile,a)){
		istringstream is(a);
	}
	
}

void stepa(){
	int a=0;
	int b=0;
	int c=0;
	int i;
	for(int j = 0;j<str.length();j++)
	{
		if(!(str[i]>='a'&& str[j]<='z')){
			if(c==1){
				b=j;
				s=str.substr(a,b-a);
				codeword.push_back(s);
				c=0;
			}
		}
		else{
			if(c==0){
				a=j;
				c=1;
			}
		}	
	}
};
void stepb(){
	int count =0;
	struct switchcase c[20] ={0};
	for(int i1 = 0;i1<codeword.size();i1++)
	{
		for(int j = 0;j<32;j++)
		{
			if(codeword[j]==rangeword[j])
			{
				rangeword[j] += 1;
				count += 1;
			}
    	}
    }
    int d=0;
	for(int i=0; i<codeword.size(); i++){
		if(codeword[i]=="switch"){
			d+=1;
		}
		if(d!=0){
			if(codeword[i]=="case"){
				c[d-1].h =d;
				c[d-1].k += 1;
			}
		}
	}
	cout<<"total num:"<<c<<endl;
	cout<<"switch num:"<<rangeword[32]<<endl;
	cout<<"case num:";
};

void stepc(){
	int array1[100];
	int e=0;
	for(int i =0;i <e; i++)
	{
		cout<<c[i].k<<" ";
	}
	cout<<" "<<endl;
	for (int j = 0;j<ifelse.size()-2;j++)
	{
		if(ifelse[j]=="if"&&ifelse[j+1]=="else"&&ifelse[j+2]!="if")
		{
			
			array1[0] += 1;
		}
	}
	cout<<"if else:"<<array1[0]<<endl;
};
void stepd(){
	int array2[100];
	for(int i = 0; i<code.size()-3; i++)
	{
		if (code[i]=="else"&&code[i+1]=="if"&&code[i+2]=="{")
		{
			array2[0] += 1;
		}
		if(i>3)
		{
			if(code[i]=="else"&&code[i+1]=="if"&&code[i+2]=="{"&&code[i+3]=="}")
			{
				if(code[i-4]=="else"&&code[i-3]=="if"&&code[i-2]=="{"&&code[i-1]=="}")
				{
					array2[0] -= 1;
				}
			}
		}
		
	} 
};
My code address:
