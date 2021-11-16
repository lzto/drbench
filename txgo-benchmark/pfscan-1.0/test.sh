echo "orig"
time ./pfscan.orig -n4 -r1 asdfqwefqwe messages

echo "google-tsan"
time ./pfscan.google-tsan -n4 -r1 asdfqwefqwe messages

echo "tx-tsan"
time ./pfscan.tsan.exe -n4 -r1 asdfqwefqwe messages


