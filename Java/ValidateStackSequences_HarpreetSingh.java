import java.util.*;
public class ValidateStackSequences_HarpreetSingh {
    
     // leetcode 946. Validate Stack Sequences
     public static boolean validateStackSequences(int[] pushed, int[] popped) {
        LinkedList<Integer> st = new LinkedList<>();
        int idx=0;
        for(int ele:pushed){
            st.addFirst(ele);
            while(st.size()!=0 && st.getFirst() == popped[idx]){
                idx++;
                st.removeFirst();
            }
        }
        return idx==popped.length;      //st.size()==0
    }
    public static void main(String[] args){
        int[] pushed = {1,2,3,4,5};
        int[] popped = {4,5,3,2,1};
        System.out.println(validateStackSequences(pushed, popped));
    }
}
