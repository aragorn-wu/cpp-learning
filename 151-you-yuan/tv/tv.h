#ifndef TV_H_
#define TV_H

class Tv{
	public:
		friend class Remote;
		enum{Off,On};
		enum{MinVal,MaxVal=20};
		enum{Antenna,Cable};
		enum{TV,DVD};

		Tv(int s=off,int mc=125):state(s,volume(5),maxchannel(mc),channel(2),mode(Cable),input(TV){}

				void onoff(){state=(state==On)?Off:On;}
				bool ison() const{return state ==On;}
				bool olup();
				bool voldown();
				void chanup();
				void chandown();
				void set_mode(){mode=(mode==Antenna):Cable:Antenna;}
				void set_input(){input=(input==TV)?DVD:TV;}
				void settings() const;


				}_
