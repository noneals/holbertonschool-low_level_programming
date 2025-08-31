int _atoi(char *s)
{
    int i = 0, sign = 1, result = 0, num_started = 0;

    // Skip non-digit characters, count signs
    while (s[i] != '\0') {
        if (s[i] == '-') sign *= -1;
        else if (s[i] == '+'); // Multiple + cancels out, sign unchanged
        else if (s[i] >= '0' && s[i] <= '9') {
            num_started = 1;
            break;
        }
        i++;
    }

    // If no digits found, return 0
    if (!num_started)
        return 0;

    // Convert digits
    while (s[i] >= '0' && s[i] <= '9') {
        result = result * 10 + (s[i] - '0');
        i++;
    }

    return sign * result;
}
