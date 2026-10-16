set cin aw ai is ts=4 sw=4 tm=50 nu noeb bg=dark ru cul
sy on   |   im jk <esc>   |   im kj <esc>   |   no ; :
" Boi den doan code roi go :Hash de xem ma bam (checksum).
" Giup kiem tra xem co go sai ky tu nao so voi sach in hay khong.
ca Hash w !cpp -dD -P -fpreprocessed \| tr -d '[:space:]' \
 \| md5sum \| cut -c-6
