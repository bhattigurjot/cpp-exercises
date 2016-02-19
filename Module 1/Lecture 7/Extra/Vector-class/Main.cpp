#include<iostream>
#include"Vector.h"

using namespace std;

int main()
{
	float coords[3] = { 1.0f, 2.0f, 3.0f };
	Vector3 u;
	Vector3 v(coords);
	Vector3 w(-5.0f, 2.0f, 0.0f);
	cout << "u = "; cout << u;
	cout << "v = "; cout << v;
	cout << "w = "; cout << w;
	cout << endl;
	cin >> u;
	cout << u;

	u = v + w;
	cout << "u = v + w : " << u;

	u = v - w;
	cout << "u = v - w : " << u;

	float f = v * w;
	cout << "f = v . w : " << f << endl;

	u = v * 3.0f;
	cout << "u = v * 3.0f : " << u;
}
