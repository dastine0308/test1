/*²§±`³B²z*/
 
#include<iostream>
#include<string>

using namespace std;

int main()
 {
	try
	{
		throw 3 / 2;
		throw 1;

	}
	catch(char e)
	{
		cout << e << endl;
	}
	catch (int e)
	{
		cout << e * 2<<endl;
	}
	catch (double e)
	{
		cout << e * 3 << endl;
	}

return 0;
}



