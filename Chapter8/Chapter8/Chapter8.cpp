// Chapter8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Objet
// Friend : name, address, age, height, weight, ...
//			print()

class Friend
{
public:	// access specifier (public, private, protected)
	string m_name;
	string m_address;
	int	   m_age;
	double height;
	double weight;

	void print()
	{
		cout << m_name << " " << m_address << " " << m_age << " " << height << " " <<
			weight << endl;
	}
};

void print(const string& name, const string& m_address, const int& m_age,
	const double& height, const double &weight)
{
	cout << name << " " << m_address << " " << m_age << " " << height << " " <<
		weight << endl;
}
int main()
{
	Friend jj{ "Jack Jack",  "Uptown", 2, 30, 10 }; // instanciation, instance

	//print(jj.name, jj.address, jj.age, jj.height, jj.weight);
	jj.print();

	vector<Friend> my_friends;
	my_friends.resize(2);

	my_friends[0].print();
	my_friends[1].print();

	for (auto& e : my_friends)
		e.print();

	/*vector<string> name_vec;
	vector<string> addr_vec;
	vector<int>		age_vec;*/

	return 0;
}
