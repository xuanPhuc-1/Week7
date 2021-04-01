#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int sum1(int *p1,int n){

	*p1 += n;
	
}
int sum2(int *p2,int n){
	*p2 += n;
}

int main (){
	int mark1 = 0, mark2 = 0, n=1;	
	srand(time(NULL));
	int res1 = rand() % (6)+1;
	int res2 = rand() % (6)+1;
	while(true)
	{
		if(mark1 < 100 && mark2 < 100){
		sum1 (&mark1,res1);
		cout << "xuc xac nguoi choi 1: " << res1 << "    " << "Tong nguoi 1:" << mark1 << endl;
		res1 = rand() % (6)+1;
		sum2 (&mark2,res2);
		cout << "xuc xac nguoi choi 2: " << res2 << "    " << "Tong nguoi 2:" << mark2 << endl;
		res2 = rand() % (6)+1;  
		//if(mark1 > 100) cout << "p1 win"; break;
		//if(mark2 > 100) cout << "p2 win"; break;
	}  
	}
	
	return 0;
}