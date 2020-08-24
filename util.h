/* See LICENSE file for copyright and license details. */

#define MAX(A, B)               ((A) > (B) ? (A) : (B))
#define MIN(A, B)               ((A) < (B) ? (A) : (B))
#define BETWEEN(X, A, B)        ((A) <= (X) && (X) <= (B))

#define POWER_FILE	"/sys/class/power_supply/BAT0/capacity"
#define CHARGE_FILE	"/sys/class/power_supply/ADP1/online"
#define READ_BUF_SIZE	4

void die(const char *fmt, ...);
void *ecalloc(size_t nmemb, size_t size);
