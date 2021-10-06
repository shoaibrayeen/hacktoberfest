import java.util.*;

public class QueueUsingStacks_harpreet1602 {

    LinkedList<Integer> st =new LinkedList<>();
    LinkedList<Integer> temp =new LinkedList<>();
    
    public QueueUsingStacks_harpreet1602() {

    }
    
    public void swapData(LinkedList<Integer> st1,LinkedList<Integer> st2){
        while(st1.size()!=0){
            st2.addFirst(st1.removeFirst());
        }
    }
    public void push(int x) {
        st.addFirst(x);   // O(1)    
    }
    
    public int pop() {
        swapData(st,temp);
        int val = temp.removeFirst();
        swapData(temp,st);
        return val;
    }
    
    public int peek() {
        swapData(st,temp);
        int val = temp.getFirst();
        swapData(temp,st);
        return val;
    }
    
    public boolean empty() {
        return st.size()==0;
    }
}
