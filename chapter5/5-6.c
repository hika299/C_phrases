#include <stdio.h>

int main(int argc, char const *argv[])
{
	int year, month, date;
	int days = 0;
	int isLeap;
	int leap_counter = 0;

	scanf("%d", &year);
	scanf("%d", &month);
	scanf("%d", &date);

	isLeap = (  (year % 400 == 0) || ( (year % 4 == 0) && (year % 100 != 0) )  );
	// <check_1> the date is basically valid?
	if (year < 1970 || month < 1 || month > 12 || date < 1 || date > 31)
		printf("%d\n", 0);
	// <check_2> the small months have 31 days? 
	else if (  (month == 4 || month == 6 || month == 9 || month == 11 ) && (date == 31)  )
		printf("%d\n", 0);
	// <check_3> Feb. has more than 29 days? Feb. 29th is in leap year?
	else if (month == 2 && ( (date > 29) || (date == 29 && !isLeap) ) )
		printf("%d\n", 0);
	// <check_end> End of the check. Comfirm the validity of the date.
	else
	{
		// Start to calculate the days 
		// <year> First, deal with year
		// <leapCount_1> add 1 for every 4 years from 1968 (1968 is the closest leap year below 1970)
		// You cannot add 1 to leap_counter because 1968 is NOT the part of our range!!) (our range is "year >= 1970, remember?")
		leap_counter += (year-1 - 1968) / 4;
		
		if (year <= 2000)
			;
		else
		{
			// <leapCount_2> substract the number of multiples of 100 above 2000 (2000 is the closest multiple of 100 above 1970)
			// You should count to only "year-1" because we add the days of "year" in the last part of our code
			// You shoud add 1 because you substract "2000" at the first.  
			leap_counter -= ((year-1 - 2000) / 100 + 1); 
			// <leapCount_3> substract the number of multiples of 400 above 2000 (2000 is the closest multiple of 400 above 1970)
			leap_counter += ((year-1 - 2000) / 400 + 1);
			// <leapCount_end>
		}
		// -1 because you should DELETE the very first date "1970.1.1" !! (The difference between 1970.1.1 and 1970.1.2 is one day!!)
		days += 365 * (year - 1970) + leap_counter - 1;
		// <month> Second, deal with month
		for (int i = 1; i < month; i++)
		{
			if ( (i == 4) || (i == 6) || (i == 9) || (i == 11) ) 
				days += 30;
			else if (i == 2)
			{
				if (isLeap)
					days += 29;
				else
					days += 28;
			}
			else
				days += 31;
		}
		// <date> Finally, add date
		days += date;
		printf("%d\n", days);
	}

	return 0;
}
// 2017-8-30
// 2017-8-31
