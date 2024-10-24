#include "../includes/utils.h"

void	run_test(char *func_name, void *tests, t_response (*f)(void *),
		int size, unsigned long elem_size)
{
	int			i;
	t_response	test;
	int			errors;
	void		*test_elem;

	errors = 0;
	i = 0;
	while (i < size)
	{
		test_elem = (char *)tests + i * elem_size;
		test = (*f)(test_elem);
		if (test.is_pass)
			msg_pass(test.desc);
		else
		{
			msg_fail(test.desc, test.expected, test.result);
			errors++;
		}
		i++;
	}
	msg_status(func_name, errors);
}
