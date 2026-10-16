# Tinh ma bam (hash) cua file, bo qua khoang trang va comment.
# Dung de doi chieu voi sach xem code go vao co dung hay khong.
cpp -dD -P -fpreprocessed | tr -d '[:space:]'| md5sum |cut -c-6
