struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *t1 = l1;
    struct ListNode *t2 = l2;
    struct ListNode *l3 = NULL;
    struct ListNode *t3 = NULL;
    long long rem = 0;
    long long num = 0;

    while (t1 != NULL || t2 != NULL) {
        rem = num;

        if (t1 != NULL) {
            rem += t1->val;
            t1 = t1->next;
        }

        if (t2 != NULL) {
            rem += t2->val;
            t2 = t2->next;
        }

        num = rem / 10;
        rem = rem % 10;

        struct ListNode *newNode = malloc(sizeof(struct ListNode));
        newNode->val = rem;
        newNode->next = NULL;

        if (l3 == NULL) {
            l3 = newNode;
            t3 = newNode;
        } else {
            t3->next = newNode;
            t3 = newNode;
        }
    }

    if (num != 0) {
        t3->next = malloc(sizeof(struct ListNode));
        t3 = t3->next;
        t3->val = num;
        t3->next = NULL;
    }

    return l3;
}