#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i=0,l,c,m;
    char a;
    string s[100000];
    ifstream inFile;
    inFile.open("input.in");
     if(inFile.fail())
    {
        cerr << "Error in file opening" << endl;
        exit(1);
    }
    ofstream outFile;
    outFile.open("output.out");
    while(!inFile.eof())
    {
       getline(inFile, s[i]);
       l=s[i].length();
       c=0; m=0;
       for(int j=0;j<l;j++)
       {
           if(s[i][j]==46)
             c=1;
           if(c==1)
           {
             if(s[i][j]>= 65 && s[i][j]<=90)
               {outFile << "-" << char(s[i][j]+32); continue; }
           }
           if(s[i][j]==123)
             c=0;
           if((l-j)>=7)
           {
               if(s[i][j]==99 && s[i][j+1]==108 && s[i][j+2]==97 && s[i][j+3]==115 && s[i][j+4]==115 && s[i][j+5]==61 && s[i][j+6]==34)
               {
                   m=1;
               }
           }
           if(m==1)
           {
             if(s[i][j]>= 65 && s[i][j]<=90)
               {outFile << "-" << char(s[i][j]+32); continue; }
           }
           if(s[i][j]==' ')
             m=0;
          outFile << s[i][j];
       }
       i++;
       outFile << "\n";
    }

    inFile.close();
    outFile.close();
    return 0;
}

// Author "Saurabh Shubham"