#define _CRT_SECURE_NO_WARNINGS 1
//Ï£¶ûÅÅÐò

void ShellSort(int* a, int n)

{

	int gap = 3;

	for (int j = 0; j < gap; j++)

	{



		for (int i = 0; i < n - gap; i += gap)

		{

			int end = i;

			int tmp = a[end + gap];

			while (end >= 0)

			{

				if (tmp < a[end])

				{

					a[end + gap] = a[end];

					end -= gap;

				}

				else

				{

					break;

				}

			}

			a[end + gap] = tmp;

		}

	}



}

//²åÈëÅÅÐò

void InsertSort(int* a, int n)

{

	for (int i = 0; i < n - 1; i++)

	{

		int end = i;

		int tmp = a[end + 1];

		while (end >= 0)

		{

			if (tmp < a[end])

			{

				a[end + 1] = a[end];

				--end;

			}

			else

			{

				break;

			}



		}

		a[end + 1] = tmp;

	}

}