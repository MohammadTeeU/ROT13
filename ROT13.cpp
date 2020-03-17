std::string rot13(std::string msg)
{
	for (char i = 0; i <msg.length(); ++i) {

			if((msg[i]>='A' && msg[i]<='M') or (msg[i]>='a' && msg[i]<='m'))
			{
				msg[i]=char(msg[i]+13);
			}else if((msg[i]>='N' && msg[i]<='Z') or (msg[i]>='n' && msg[i]<='z'))
			{
				msg[i]=char(msg[i]-13);
			}
		}
  return msg;
}
