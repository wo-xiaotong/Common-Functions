////Min Stack Total Accepted
////Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
////
////push(x) -- Push element x onto stack.
////pop() -- Removes the element on top of the stack.
////top() -- Get the top element.
////getMin() -- Retrieve the minimum element in the stack
//#include<iostream>
//#include<map>
//using namespace std;
//
//class MinStack {
//public:
//    void push(int x) {
//        if(min_stack.size()==0||x<minElement){
//                minElement=x;
//        }
//        min_stack[x]=minElement;
//    }
//
//    void pop() {
//        if(min_stack.empty())return ;
//        min_stack.erase((--min_stack.end()));
//    }
//
//    int top() {
//        return (--min_stack.end())->second;
//    }
//
//    int getMin(){
//        return (--min_stack.end())->second;
//    }
//
//    int getSize(){
//        return min_stack.size();
//    }
//
//private:
//
//};
//
//int main()
//{
////    MinStack s;
////    s.push(2);
////    s.push(0);
////    s.push(3);
////    s.push(0);
////    cout<<s.getMin();
////    s.pop();
////    cout<<s.getMin();
////    s.pop();
////    cout<<s.getMin();
////    s.pop();
////    cout<<s.getMin();
//    return 0;
//}
