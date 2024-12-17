#include<iostream>
using namespace std;

int main(){
	char grade;
	int count[5] = {}, i = 1; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	do{
		cout << "Student [" << i << "]: ";
		cin >> grade; 
		
		if(grade == '0') {//The loop must be terminated when grade = '0'
			break;
		}else if(grade == 'A'){ // if grade is A
			//Do something
			count[0]++;
			i++; 
		}else if(grade == 'B'){ // if grade is B
			//Do something
			count[1]++;
			i++; 
		}else if(grade == 'C'){ // if grade is c
			//Do something
			count[2]++;
			i++; 
		}else if(grade == 'D'){ // if grade is D
			//Do something
			count[3]++;
			i++; 
		}else if(grade == 'F'){ // if grade is F
			//Do something
			count[4]++;
			i++; 
		//and so on ... for grade = C, D, F	
		}else{ // grade is wrong input
			//Do something
			cout << "Wrong input. Please input again." << endl;
		}
		
	}while(grade != 0);
	
	
	cout << "In total " << --i << " students." << endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4];
	//	and so on ... for grade = C, D, F	
	
	return 0;
}	