import java.util.*;
public class AsteroidCollision_HarpreetSingh{
//  leetcode  735. Asteroid Collision
public static int[] asteroidCollision(int[] asteroids) {
    LinkedList<Integer> st = new LinkedList<>();

    for(int ele:asteroids){
        if(ele>0){
            st.addFirst(ele);
            continue;
        }
        while(st.size()!=0 && st.getFirst()>0 && st.getFirst()<-ele){
            st.removeFirst();
        }
        if(st.size()!=0 && st.getFirst()>0 && st.getFirst() == -ele){
            st.removeFirst();
        }
        else if(st.size() == 0 || st.getFirst()<0){
            st.addFirst(ele);
        }
        else{
            // do nothing
        }
    }

    int[] ans = new int[st.size()];
    int ind = ans.length-1;
    while(st.size()!=0){
        ans[ind--] = st.removeFirst();
    }
    return ans;
}
    public static void main(String[] args)
    {
        int[] asteroids={5,10,-5};
        int[] ans = asteroidCollision(asteroids);
        for(int ele:ans){
            System.out.print(ele+" ");
        }
    }
}