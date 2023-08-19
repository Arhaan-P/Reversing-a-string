#include <iostream.h>
#include <conio.h>
#include <string.h>
void reverse (char p[],int n);
void main() {
	clrscr();
	char text [50];
	cout<<"Enter the string \n ";
	cin.getline (text,50);
	int n= strlen (text);
	cout<<"Original string \n "<<text;
	reverse (text,n);
	cout<<"Reversed string "<<text;
	getch();
}
void reverse(char p[], int n) {
	for (int i=0; i<(n/2); i++) {
		char t=p[i];
		p[i]=p[i-n-1];
		p[n-i-1]=t;
	}
}