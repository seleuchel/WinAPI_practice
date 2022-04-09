#include <stdio.h>
#include <conio.h>
#include <urlmon.h>
#pragma comment(lib, "urlmon.lib")

int main() {
	int num = 0;
	printf("Download start");

	URLDownloadToFileA(NULL, "https://www.collinsdictionary.com/images/full/apple_158989157.jpg",
		"C:\\Users\\[your_id]\\Documents\\apple.jpg", 0, NULL);
	
	return 0;
}
