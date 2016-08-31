//
//  main.cpp
//  c++project
//
//  Created by Daxing Gao on 16/8/16.
//  Copyright © 2016年 Daxing Gao. All rights reserved.
//

#include<iostream>
#include<sstream>
#include<string>
using namespace std;

class student{
public: int c1,c2,c3,c4;
public: string name,age,ID;
   int get_ave(){
    return (c1+c2+c3+c4)/4;
   }
};

int main(){
    string a;
    string b;
    
    cin>>a;
    student s;
    istringstream ss(a);
    
    getline(ss,b,',');
    s.name=b;
    getline(ss,b,',');
    s.age=b;
    getline(ss,b,',');
    s.ID=b;
    getline(ss,b,',');
    s.c1=stoi(b);
    getline(ss,b,',');
    s.c2=stoi(b);
    getline(ss,b,',');
    s.c3=stoi(b);
    getline(ss,b,',');
    s.c4=stoi(b);
    
    cout<<s.name<<','<<s.age<<','<<s.ID<<','<<s.get_ave()<<endl;
    
    return 1;
}

