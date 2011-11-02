/**
 * @file alarms_s6/alarms_s6.c
 *
 * @section desc File description
 *
 * @section copyright Copyright
 *
 * Trampoline Test Suite
 *
 * Trampoline Test Suite is copyright (c) IRCCyN 2005-2007
 * Trampoline Test Suite is protected by the French intellectual property law.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; version 2
 * of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * @section infos File informations
 *
 * $Date$
 * $Rev$
 * $Author$
 * $URL$
 */

#include "config.h" /*Display information in the right way (printf on UNIX...)*/
#include "tpl_os.h"
#include "embUnit.h"

int instance_t1 = 0;

TestRef AlarmsTest_seq6_t1_instance(void);
TestRef AlarmsTest_seq6_t2_instance1(void);
TestRef AlarmsTest_seq6_t2_instance2(void);
TestRef AlarmsTest_seq6_t3_instance(void);

int main(void)
{
	StartOS(OSDEFAULTAPPMODE);
	return 0;
}

void ShutdownHook(StatusType error)
{ 
	TestRunner_end();
}

TASK(t1)
{
	TestRunner_start();
	TestRunner_runTest(AlarmsTest_seq6_t1_instance());
}

TASK(t2)
{
	instance_t1 ++;
	switch(instance_t1)
	{ 
		case 1:	
		{
			TestRunner_runTest(AlarmsTest_seq6_t2_instance1());
			break;
		}
		case 2:
		{
			TestRunner_runTest(AlarmsTest_seq6_t2_instance2());
			ShutdownOS(E_OK);
			break;
		}
		default:
		{
			stdimpl_print("Instance error \n");
			break;
		}
	}
}

TASK(t3)
{
	TestRunner_runTest(AlarmsTest_seq6_t3_instance());
}

/* End of file alarms_s6/alarms_s6.c */