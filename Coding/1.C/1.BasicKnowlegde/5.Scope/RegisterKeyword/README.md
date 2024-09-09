được sử dụng để đề xuất với trình biên dịch rằng biến nên được lưu trữ trong các thanh ghi của CPU thay vì trong bộ nhớ chính để tối ưu hóa hiệu suất. Tuy nhiên, đây chỉ là một gợi ý và trình biên dịch có thể bỏ qua đề xuất này nếu không có đủ thanh ghi hoặc nếu nó không thấy cần thiết.

Không thể lấy địa chỉ của một biến register (không thể sử dụng toán tử & với nó), bởi vì biến register có thể không có địa chỉ trong bộ nhớ chính.
