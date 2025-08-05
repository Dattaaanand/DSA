class Stack{
    int top, size;
    int[] stack;
    
    public Stack(int size){
        this.size = size;
        top = -1;
        stack = new int[size];
    }

    public boolean push(int element){
        if (top > size-1){
            System.out.println("Stack Overflow");
            return false;
        }
        stack[++top] = element;
        return true;
    }

    public int pop(){
        if (isEmpty()){
            System.out.println("Stack Underflow");
            return 0;
        }
        return stack[top--];
    }

    public int peek(){
        if (top < 0){
            return 0;
        }
        return stack[top];
    }

    public boolean isEmpty(){
        if (top < 0){
            return true;
        }
        return false;
    }
}

public class Main{
    public static void main(String[] args) {
        Stack s = new Stack(5);
        s.push(5);
        s.push(2);
        s.push(6);
        s.push(1);
        while (! s.isEmpty()){
            System.out.println(s.peek() +" ");
            s.pop();
        }
    }
}