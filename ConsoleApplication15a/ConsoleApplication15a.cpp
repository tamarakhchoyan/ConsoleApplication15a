#include <iostream>
int main()
{
	unsigned int a, b, c;
	unsigned int a1, b1, c1;
	std::cin >> a >> b >> c;
	std::cin >> a1 >> b1 >> c1;
	if(a==a1 && b==b1 && c==c1)
	{
		std::cout << "YES";
	}
	else { std::cout << "NO"; }
	return 0;
}