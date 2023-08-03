from setuptools import find_packages
from setuptools import setup

setup(
    name='homogeneous_transform_pkg',
    version='0.0.0',
    packages=find_packages(
        include=('homogeneous_transform_pkg', 'homogeneous_transform_pkg.*')),
)
