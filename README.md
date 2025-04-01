# Reverse-sum-in-lists
C++ program to add the two numbers,stored in linked list in reversed order and return the sum as a linked list (also in reverse order).
Problem Statement:
You are given two singly linked lists representing two non-negative integers. The digits are stored in reverse order, and each node contains a single digit. Write a program to add the two numbers and return the sum as a linked list (also in reverse order).
Additionally, your solution should:
1.	Handle empty lists (treat as 0)
2.	Not modify the original lists
3.	Optimize for O(n) time complexity
4.	Minimize space usage (O(1) extra space besides the result list)
Input Format:
 ListNode 1:[2->4->3] (represents 342)
 ListNode 2:[5->6->4] (represents 465)
Expected Output:
 [7->0->8] (represents 807 which is 342 + 465)
Solution Template:
class ListNode {
    int val;
    ListNode next;
    ListNode(int val) { this.val = val; }
}

public class LinkedListAddition {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        // Implement your solution here
    }
    
    // Helper method to print the list (for testing)
    public static void printList(ListNode node) {
        while (node != null) {
            System.out.print(node.val + " ");
            node = node.next;
        }
        System.out.println();
    }
    
    public static void main(String[] args) {
        // Test case
        ListNode l1 = new ListNode(2);
        l1.next = new ListNode(4);
        l1.next.next = new ListNode(3);
        
        ListNode l2 = new ListNode(5);
        l2.next = new ListNode(6);
        l2.next.next = new ListNode(4);
        
        LinkedListAddition solution = new LinkedListAddition();
        ListNode result = solution.addTwoNumbers(l1, l2);
        printList(result); // Expected: 7 0 8
    }
}
Grading Criteria:
1.	Correctness (50%) - Handles all edge cases
2.	Efficiency (30%) - Optimal time and space complexity
3.	Code Quality (20%) - Readability, proper structure, and comments
Expected Solution Approach:
1.	Initialize a dummy head for the result list
2.	Iterate through both lists simultaneously
3.	Calculate sum of current digits along with carry
4.	Create new nodes for the result list
5.	Handle remaining digits in longer list
6.	Account for final carry if exists



