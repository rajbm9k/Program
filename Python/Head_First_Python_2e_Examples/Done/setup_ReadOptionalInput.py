from setuptools import setup
print("Usage: python3 setup_ReadOptionalInput.py --name ; {--name or --version or --description or --url or --author or --author-email}")
setup(
    name='vsearch',
    version='1.0',
    description='The Head First Python Search Tools',
    author='HF Python 2e',
    author_email='raj@gmail.com',
    url='headfirstlabs.com',
    py_modules=['vsearch'],
)
