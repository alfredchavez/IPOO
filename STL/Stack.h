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
      Stack<T>operator-(Stack<T>sb){
        vector<T>vecb(sb.getContainer());
        vector<T>veca(container);
        for(int i=0;i<veca.size();i++){
            for(int j=0;j<vecb.size();j++){
                if(veca[i]==vecb[j]){
                    veca.erase(veca.begin()+i);
                    i--;
                    break;
                }
            }
        }
        Stack<T>s3;
        for(int i=0;i<veca.size();i++){
            s3.push(veca[i]);
        }
        return s3;
    }
};
