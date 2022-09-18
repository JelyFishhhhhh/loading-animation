#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
typedef long long ll;

void process(int x){
	int k;
	cout<<"|";
	for(k=0;k!=(100-x);++k){
		cout<<"#";
	}
	for(k=x;k!=0;--k){
		cout<<" ";
	}
	cout<<"|";
	cout<<(100-x)<<" % Done.";
	return;
}

void animation(int x){
	int rd,time;
	while(x!=-1) {
		time=(rand()%10)+1;
		rd=(rand()%3);
        Sleep(time);
		system("cls");
		process(x);
        cout << "\\" << flush;
        Sleep(time);
		system("cls");
		process(x);
        cout << "|" << flush;
        Sleep(time);
		system("cls");
		process(x);
        cout << "/" << flush;
        Sleep(time);
		system("cls");
		process(x);
    	cout << "-" << flush;
		--x;
    }
	system("cls");
	cout<<"Model Loaded. Click To Start\n";
}

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int x=100,k;
	animation(x);
	Sleep(1000);
	system("cls");
	
}