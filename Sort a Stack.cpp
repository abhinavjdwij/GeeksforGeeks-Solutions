/*input
1
3
1
2
3
*/

#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};



void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}

/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */

void insert(std::stack<int> &s, int x) {
	if (s.empty() || s.top() < x) s.push(x);
	else {
		int temp = s.top();
		s.pop();
		insert(s, x);
		s.push(temp);
	}
}

void sortStack(std::stack<int> &s) {
	if (s.empty()) {
		int temp = s.top();
		s.pop();
		sortStack(s);
		insert(s, temp);
	}
} 

void SortedStack :: sort() {
    sortStack(this->s);
}