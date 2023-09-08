#include<iostream>
using namespace std;

int x;
int cource[20];
double credit[20];
//double marks[20];
double gp[20];
double gpa1[20];
string grade[20];


void insertCource(){
cout<<"how many cources are in the semester(Credit cources): ";
cin>>x;

cource[x];
cout<<"Enter cource codes: "<<endl;
for(int i=0;i<x;i++){
    cin>>cource[i];
} 
for(int i=0;i<x;i++){
    credit[i]=cource[i]%10;
}


}
void insertMarks(){
    for(int i=0;i<x;i++){
        cout<<"Enter "<<cource[i]<<" cource grade: ";
        cin>>grade[i];
    }
}
void gradePoint(){
    for(int i=0;i<x;i++){
    if(grade[i]=="A+" || grade[i]=="a+"){
        gp[i]=4.0;
    }
    else if(grade[i]=="A" || grade[i]=="a"){
        gp[i]=4.0;
    }
    else if(grade[i]=="A-" || grade[i]=="a-"){
        gp[i]=3.7;
    }
    else if(grade[i]=="B+" || grade[i]=="b+"){
        gp[i]=3.3;
    }
    else if(grade[i]=="B" || grade[i]=="b"){
        gp[i]=3.0;
    }
    else if(grade[i]=="B-" || grade[i]=="b-"){
        gp[i]=2.7;
    }
    else if(grade[i]=="C+" || grade[i]=="c+"){
        gp[i]=2.3;
    }
    else if(grade[i]=="C" || grade[i]=="c"){
        gp[i]=2.0;
    }
    else if(grade[i]=="C-" || grade[i]=="c-"){
        gp[i]=1.7;
    }
    else if(grade[i]=="D+" || grade[i]=="d+"){
        gp[i]=1.3;
    }
    else if(grade[i]=="D" || grade[i]=="d"){
        gp[i]=1.0;
    }
    else if(grade[i]=="E" || grade[i]=="e"){
        gp[i]=0.0;
    }
    }
    /*for(int i=0;i<x;i++){
        cout<<"grade point for each sub: "<<gp[i]<<" ";
    }*/
    cout<<endl;
}
void gpa(){
 for(int i=0;i<x;i++){
    gpa1[i]=(double)credit[i]*gp[i];
 }

 /*for(int i=0;i<x;i++){
    cout<<"gpa for each sub: "<<gpa1[i]<<" ";
 }*/
 cout<<endl;

 double gTotal=0;//gpa total
 for(int i=0;i<x;i++){
    gTotal=gTotal+gpa1[i];
 }
 //cout<<"total gpa: "<<gTotal<<endl;

 double cTotal=0;//credit total
 for(int i=0;i<x;i++){
    cTotal=cTotal+(double)credit[i];
 }
 //cout<<"total credit: "<<cTotal<<endl;
 float SGPA=gTotal/cTotal;;
 cout<<"Final SGPA = "<<SGPA;
 cout<<endl;

}

int main(){

section:{
insertCource();
insertMarks();
gradePoint(); 
gpa();

    char ans;
    cout<<"Do you want to Enter your grades again(Y/N)? ";
    cin>>ans;

    if(ans=='Y' || ans=='y'){
        goto section;
    }
    else{
        cout<<"Thank you!!!";
    }
}


    return 0;
}