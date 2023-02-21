#include <iostream>
#include "stack.h"
using namespace std;


int main()
{
	stack<int> st;

	st.push(10);
	st.push(20);
	st.push(30);

	cout << st.top() << "----->";
	st.pop();
	cout << st.top() << "----->";
	st.pop();
	cout << st.top() << "----->";
	st.pop();
	cout << st.top() << "----->";
	return 0;



}