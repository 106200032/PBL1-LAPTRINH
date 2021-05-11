#include<iostream>
#include<string>
using namespace std;
class Quanliquanan {
private:
	int n;
	int order;
	int soluong;
	int MaNV;
	string TenNV;
	string diachi;
	string gioitinh;
	float gioBDlam;
	float gioKTlam;
	float salary = 0;
	float giolamtrong1ngay;
	float tienlam1gio = 10.000;
	int SDT;
	string TenKH;
	int ban; 
public:
	void thongtinnhanvien() {
		cout << "=========== THONG TIN NHAN VIEN ===============" << endl;
		cout << "Nhap Ten Nhan Vien :";
		getline(cin, TenNV);
		cout << "Nhap Dia Chi Nhan Vien :";
		getline(cin, diachi);
		cout << "Nhap Gioi Tinh Nhan Vien :";
		getline(cin, gioitinh);
		cout << "Nhap So Dien Thoai Nhan Vien :";
		cin >> SDT;
		cout << "Nhap Gio Bat Dau Lam Nhan Vien :";
		cin >> gioBDlam;
		cout << "Nhap Gio Ket Thuc Lam Nhan Vien :";
		cin >> gioKTlam;
	}
	void thongtinkhachhang() {
		cout << "=========== THONG TIN KHACH HANG ==============" << endl;
		cout << "Ban So :";
		cin >> ban;
	}
	void Menu() {
		cout << "============= THONG TIN MENU ==================" << endl;
		cout << "Nhap so lan lua chon :";
		cin >> n;
			for (int i = 1; i <= n; i++) {
				cout << "/****========================= MENU =========================***/" << endl;
				cout << endl;
				cout << "STT       TEN MON AN                              GIA MON AN  " << endl;
				cout << "(1)       Bun thit nuong                          15.000 VND" << endl;
				cout << "(2)       Bun bo hue                              15.000 VND" << endl;
				cout << "(3)       Banh xeo                                15.000 VND" << endl;
				cout << "(4)       Com chien                               20.000 VND" << endl;
				cout << "(5)        Com                                    10.000 VND " << endl;
				cout << "(6)       Ca kho                                  30.000 VND" << endl;
				cout << "(7)       Rau muong xao                           25.000 VND" << endl;
				cout << "(8)        Bo xao                                 30.000 VND" << endl;
				cout << "(9)       Nuoc loc                                7.000 VND" << endl;
				cout << "(10)       Bia                                    15.000 VND" << endl;
				cout << "(11)      Coca-cola                               15.000 VND" << endl;
				cout << endl;
				cout << "VUI LONG CHON SO CUA TUNG MON AN :";
				cin >> order;
				cout << "VUI LONG NHAP SO LUONG :";
				cin >> soluong;
				switch (order) {
				case 1:
					cout << " Order  :       Bun thit nuong    " << endl;
					cout << " So luong :                       " << soluong << endl;
					cout << " Gia mon an :    15.000 VND       " << endl;
					cout << " Tong cong :                      " << 15.000 * soluong << " VND" << endl;
					cout << endl;
					cout << "~-------------- THANK YOU FOR COMING --------------------~" << endl;
					break;
				case 2:
					cout << " Order  :       Bun bo hue        " << endl;
					cout << " So luong :                       " << soluong << endl;
					cout << " Gia mon an :   15.000 VND        " << endl;
					cout << " Tong cong :                      " << 15.000 * soluong << " VND" << endl;
					cout << endl;
					cout << "~-------------- THANK YOU FOR COMING --------------------~" << endl;
					break;
				case 3:
					cout << " Order  :      Banh xeo        " << endl;
					cout << " So luong :                    " << soluong << endl;
					cout << " Gia mon an :  15.000 VND      " << endl;
					cout << " Tong cong :                   " << 15.000 * soluong << " VND" << endl;
					cout << endl;
					cout << "~-------------- THANK YOU FOR COMING --------------------~" << endl;
					break;
				case 4:
					cout << " Order  :      Com chien          " << endl;
					cout << " So luong :                       " << soluong << endl;
					cout << " Gia mon an :  20.000 VND         " << endl;
					cout << " Tong cong :                      " << 20.000 * soluong << " VND" << endl;
					cout << endl;
					cout << "~-------------- THANK YOU FOR COMING --------------------~" << endl;
					break;
				case 5:
					cout << " Order  :       Com               " << endl;
					cout << " So luong :                       " << soluong << endl;
					cout << " Gia mon an :   10.000 VND        " << endl;
					cout << " Tong cong :                      " << 10.000 * soluong << " VND" << endl;
					cout << endl;
					cout << "~-------------- THANK YOU FOR COMING --------------------~" << endl;
					break;
				case 6:
					cout << " Order  :      Ca kho        " << endl;
					cout << " So luong :                  " << soluong << endl;
					cout << " Gia mon an :  30.00         " << endl;
					cout << " Tong cong :                 " << 30.000 * soluong << " VND" << endl;
					cout << endl;
					cout << "~-------------- THANK YOU FOR COMING --------------------~" << endl;
					break;
				case 7:
					cout << " Order  :      Rau muong xao   " << endl;
					cout << " So luong :                    " << soluong << endl;
					cout << "  Gia mon an :  25.000          " << endl;
					cout << " Tong cong :                   " << 25.000 * soluong << " VND" << endl;
					cout << endl;
					cout << "~-------------- THANK YOU FOR COMING --------------------~" << endl;
					break;
				case 8:
					cout << " Order  :      Bo xao          " << endl;
					cout << " So luong :                    " << soluong << endl;
					cout << " Gia mon an :  30.000 VND      " << endl;
					cout << " Tong cong :                   " << 30.000 * soluong << " VND" << endl;
					cout << endl;
					cout << "~-------------- THANK YOU FOR COMING --------------------~" << endl;
					break;
				case 9:
					cout << " Order  :      Nuoc loc     " << endl;
					cout << " So luong :                 " << soluong << endl;
					cout << " Gia mon an :  7.000 V      " << endl;
					cout << " Tong cong :                " << 7.000 * soluong << " VND" << endl;
					cout << endl;
					cout << "~-------------- THANK YOU FOR COMING --------------------~" << endl;
					break;
				case 10:
					cout << " Order  :      Bia           " << endl;
					cout << " So luong :                  " << soluong << endl;
					cout << " Gia mon an :  15.000 VND    " << endl;
					cout << " Tong cong :                 " << 15.000 * soluong << " VND" << endl;
					cout << endl;
					cout << "~-------------- THANK YOU FOR COMING --------------------~" << endl;
					break;
				case 11:
					cout << " Order  :      Coca-cola     " << endl;
					cout << " So luong :                  " << soluong << endl;
					cout << " Gia mon an :  10.000 VND    " << endl;
					cout << " Tong cong :                 " << (10.000 * soluong) << " VND" << endl;
					cout << endl;
					cout << "~-------------- THANK YOU FOR COMING --------------------~" << endl;
					break;
				}
			}
	}
	float tongsogiotrong1ngay() {
		return giolamtrong1ngay = gioKTlam - gioBDlam;
	}
	float tongtienlamtrong1ngay() {
		return salary = giolamtrong1ngay * tienlam1gio;
	}
};
int main() {
	Quanliquanan s1;
	s1.thongtinnhanvien();
	cout <<"SO GIO LAM TRONG 1 NGAY :"<< s1.tongsogiotrong1ngay() <<" GIO"<< endl;
	cout << "TIEN LAM TRONG 1 NGAY :" << s1.tongtienlamtrong1ngay()<<" VND"<< endl;
	s1.thongtinkhachhang();
	s1.Menu();
	
	return 0;
}