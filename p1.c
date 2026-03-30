import java.util.Stack; 
class MinStack { 
private Stack<Integer> mainStack; 
private Stack<Integer> minStack; 
public MinStack() { 
mainStack = new Stack<>(); 
minStack = new Stack<>(); 
} 
public void push(int val) { 
mainStack.push(val); 
if (minStack.isEmpty() || val <= minStack.peek()) { 
minStack.push(val); 
} 
} 
public void pop() { 
if (mainStack.peek().equals(minStack.peek())) { 
minStack.pop(); 
} 
FACULTY OF ENGINEERING & TECHNOLOGY 
(303105259) Competitive Coding 
Enrollment No: 2403031050173 Page no: 
 
 
 
mainStack.pop(); 
 
public int top() { 
return mainStack.peek(); 
} 
public int getMin() { 
return minStack.peek(); 
} 
// Main method for testing (required for online compilers) 
public static void main(String[] args) { 
MinStack stack = new MinStack(); 
stack.push(5); 
stack.push(3); 
stack.push(7); 
stack.push(3); 
 
System.out.println("Top: " + stack.top()); // 3 
System.out.println("Min: " + stack.getMin()); // 3 
 
stack.pop(); 
System.out.println("Min after pop: " + stack.getMin()); // 3 
 
 
stack.pop(); 
System.out.println("Min after pop: " + stack.getMin()); // 3 
 
 
stack.pop(); 
System.out.println("Top: " + stack.top()); // 5 
System.out.println("Min: " + stack.getMin()); // 5 
} 
} 
