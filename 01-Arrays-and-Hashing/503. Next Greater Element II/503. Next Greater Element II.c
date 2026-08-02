public class Solution {

    public int[] nextGreaterElements(int[] nums) {
        
        int[] res = new int[nums.length];
        
        Deque<Integer> stack = new ArrayDeque<>();
        
        for (int i = nums.length -1; i >= 0; --i) {
             while(!stack.isEmpty() && nums[stack.peek()] <= nums[i]) {
                 stack.pop();
             }    
             // The stack is either empty, when no greater element is found to the right of nums[i],
             // or contains the next greater element of nums[i] at the top.
             res[i] = stack.isEmpty() ? -1 : stack.peek();
            
             // Push i into stack, so that nums[i-1] will compare with nums[i] first, before falling back to 
             // the next greater element of nums[i]
             stack.push(i);
        }
        
        // At the end of round one, the stack[top] is always 0,
        // and stack[0] is always the index of the first greatest value in nums[],
        // and it's obviously that the next greater element of each element from nums[0] through nums[stack[0]]
        // has been confirmed.
        // So it is only necessary to iterate nums[nums.length - 1] through nums[stack[0] + 1] in round 2 
        // to find those greater elements that have not been found in round 1.
        // And for any element nums[i], if its next greater element is not found in round 1, it will only
        // be necessary to compare it with nums[0]...nums[stack[0]], and any element to the right of
        // nums[stack[0]] can be ignored, because nums[stack[0]] is the greatest one. 
        int j = stack.isEmpty() ? -1 : stack.peekLast();
        for (int i = nums.length -1; i > j; i--) {
            while(res[i] == -1 && !stack.isEmpty() && nums[stack.peek()] <= nums[i]) {
                stack.pop();
            }
            
            if (res[i] == -1){
                res[i] = stack.isEmpty() ? -1 : stack.peek();
            }

            // No need to push i now, because in round 1, an element has been compared to all elements to its right
            
            // What about the popped elements? Do we need push them back?
            // It won't be necessary, because if nums[i] is greater then stack[top], it will pop the stack till stack[k], where
            // nums[i] < stack[k]. Assume there is an element nums[j], where j < i, and the greater element of nums[j] is not   
            // found in round 1 either. 
            // Because in round 1, nums[j] has been compared with all elements to its right, and none of them is greater than it,             
            // which means nums[i] is not greater than nums[j], so any elements popped by nums[i], will also be popped by nums[j]
            // it just might pop more elements than nums[i] does.
            // And since stack[0] is the greatest value, it is the bottom line for all elements.
        }
        
        return Arrays.stream(res).map(e->e!=-1 ? nums[e] : -1).toArray();
    }
}