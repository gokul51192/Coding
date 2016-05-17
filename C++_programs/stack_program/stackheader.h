#ifndef STACK_HEADER
#define STACK_HEADER

struct stack
{
	struct Link
	{
		void * data;
		Link * next;
		void initialize(void * data,Link * node);
	}*head;
	void initialize();
	void push(void * data);
	void pop(void **p_data);
	void peek(void *data);
	void cleanup();
};
#endif
