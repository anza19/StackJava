public class Stack {
    private int maxSize;
    private long stackArray[];
    private int top;

    /** Default Stack constructor
     * we set maxSize here
     * */
    public Stack(int maxSize){
        this.maxSize = maxSize;
        this.stackArray = new long[maxSize];
        this.top = -1;
    }

    /*Stack methods*/
    /****************************************************************************/

    /** boolean isEmpty()
     * Checks if the stack is empty, if value of top == -1
     * the stack is indeed empty
     */
    public boolean isEmpty(){
        return (top == -1);
    }

    /** boolean isFull()
     * Checks if the stack is full, if value of top == maxSize -1
     * the stack is indeed full
     */
    public boolean isFull(){
        return (top == maxSize-1);
    }

    /** peek()
     * Returns the value at top
     */
    public long peek(){
        return (stackArray[top]);
    }

    /** void push(long j)
     * this method pushes a long or any data type that
     * the stack is supposed to hold, to the top
     * we use a preincrementing operation because it
     * increments the value of top before we use it not
     * after, we than add the value to top
     */
     public void push(long data){
         //we run a check to see if full or not first
         if(!isFull()){
             stackArray[++top] = data;
         }else{
             System.out.println("Cannot push to stack because it is full.");
         }
     }

    /** long pop()
     * this method pops off the top most value of the stack
     * it decrements the value of top, than returns the value
     */
    public long pop(){
        //first we check if the stack is empty
        if(!isEmpty()){
            return (stackArray[top--]);
        }else{
            System.out.println("Cannot pop from stack because it is empty.");
            return -42;
        }
    }
}
