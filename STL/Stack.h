#include <vector>
using namespace std;

template<typename T>
class Stack{
   private:
      vector<T> container;
   public:
      void push(T new_element){
	 container.push_back(new_element);
      }
      void pop(){
	 container.pop_back();
      }
      vector<T> getContainer(){
	 return container;
      }
      Stack<T> operator+ (Stack<T> stack2){
	 Stack<T> stack3;
	 vector<T>vec1(container);
	 vector<T>vec2(stack2.getContainer());
	 for(long long int i=0;i<vec1.size();i++){
	    stack3.push(vec1[i]);
	 }
	 for(long long int i=0;i<vec2.size();i++){
	    stack3.push(vec2[i]);
	 }
	 return stack3;
	      
      }
};
