#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Feb 28 02:24:23 2019

@author: alphatec1
"""
#burada hata payları ve gelen görüntüler,lidar analiz edilip; hata payı ve olumsuz davranışların hata payının olasılığı hesaplanarak data sete bilgi aktaracak.
import torch
import pyro

pyro.set_rng_seed(101)
