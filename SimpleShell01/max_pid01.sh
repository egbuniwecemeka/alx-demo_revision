#!/bin/bash
pid_max=$(cat /proc/sys/kernel/pid_max)
echo "MAX PID: $pid_max"
