Cách hoạt động của vtable
Khi một lớp trong C++ có ít nhất một phương thức ảo, trình biên dịch sẽ tự động tạo ra một vtable cho lớp đó.
vtable chứa con trỏ tới các phương thức ảo của lớp. Nếu lớp dẫn xuất (derived class) ghi đè (override) một phương thức ảo của lớp cơ sở (base class), vtable của lớp dẫn xuất sẽ trỏ tới phương thức mới này.
Mỗi đối tượng của lớp có vtable sẽ chứa một con trỏ đặc biệt (thường gọi là vptr hoặc virtual pointer) trỏ tới vtable của lớp đó.

---

Khi bạn gọi phương thức show() trên một đối tượng của lớp Derived thông qua một con trỏ kiểu Base\*, con trỏ này sẽ sử dụng vtable để xác định phương thức cần gọi, nhờ đó mà phương thức show() của lớp Derived sẽ được gọi thay vì phương thức của lớp Base.
