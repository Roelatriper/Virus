#include "windows.h" 
#include "time.h"
#include <bits/stdc++.h>
using namespace std;
//:> Like a virus or a girl,swallow into ur heart,make you remember her bloom as a fresh air.Disappearing like phantom.

void HideWindow() {
	HWND hwnd = GetForegroundWindow();	
	if (hwnd) {
		ShowWindow(hwnd, SW_HIDE);	//Setting status
	}
}

int main(){
	HideWindow();
	First:
	freopen("poemsOfComputer.log","w",stdout);
	int count=0;
	Flags:
	time_t now;
	 struct tm *timenow;
	 time(&now); //time Read 
	 timenow = localtime(&now); 
	 //localtime in order to local time 
	 string bell = asctime(timenow); 
	if(((int)bell[11]-48) >= 2 || ((int)bell[12]-48) >= 3){
		cout << bell << ":Done." << endl;
		system("cd C:\Program Files\SakuraFrpLauncher");
		system("SakuraLauncher.exe");
		_sleep(360000);
		system("taskkill /f /im SakuraLauncher.exe");
	}else {
		cout << bell << ":"<< (int)bell[11]-48 << (int)bell[12]-48 << ",Not in time." << endl;
		_sleep(600);
		count++;
		if(count==600){
			count=0;
			goto First;
		}
		goto Flags;
	}
	
	return 0;
}

