#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void writeChar()
{
	char line[1024];
	ofstream fout("char.txt");
	if(!fout)
	{
		cout<<"Couldn't open file \n";
	}
	else
	{
		cout<<"Enter the line to write into the file or 'stop' to end: \n";
		cin.getline(line,1024);
		while(strcmp(line,"stop") != 0)
		{
			fout<<line<<endl;
			cin.getline(line,1024);
		}
	}
}

void readChar()
{
	char line[1024];
	ifstream fin("char.txt");
	if(!fin)
	{
		cout<<"could not open the file \n";

	}
	else
	{
		cout<<"Reading the contents from the file \n";
		fin.getline(line,1024);
		while(!fin.eof())
		{
			cout<<line<<endl;
			fin.getline(line,1024);
		}
	}
}


int main()
{
	writeChar();
	readChar();

	return 0;

}
