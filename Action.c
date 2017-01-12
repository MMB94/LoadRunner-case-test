//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Move mouse over element (1)", "snapshot=Action_1.inf");
	truclient_step("2", "search (1)", "snapshot=Action_2.inf");
	{
		truclient_step("2.1", "Click on Search combobox", "snapshot=Action_2.1.inf");
		truclient_step("2.3", "Type 123 in Search combobox", "snapshot=Action_2.3.inf");
		truclient_step("2.4", "Press Enter key on Search combobox", "snapshot=Action_2.4.inf");
	}
	truclient_step("4", "Click on Books link", "snapshot=Action_4.inf");
	truclient_step("5", "Click on Videos link", "snapshot=Action_5.inf");

	return 0;
}
