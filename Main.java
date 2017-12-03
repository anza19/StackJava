public class Main {
    public static void main(String[] args) {
        Stack stack = new Stack(10);
        for(long i=0;i<11;i++){
            stack.push(i);
        }
        while (!stack.isEmpty()){
            long val = stack.pop();
            System.out.println("Stack value is: " + val);
        }
    }
}
